//
//  KUSChatSessionsDataSource.h
//  Kustomer
//
//  Created by Daniel Amitay on 7/22/17.
//  Copyright © 2017 Kustomer. All rights reserved.
//

#import "KUSPaginatedDataSource.h"

#import "KUSChatSession.h"

@class KUSChatMessage;
@interface KUSChatSessionsDataSource : KUSPaginatedDataSource

- (void)createSessionWithTitle:(NSString *)title completion:(void(^)(NSError *error, KUSChatSession *session))completion;
- (void)updateLastSeenAtForSessionId:(NSString *)sessionId completion:(void(^)(NSError *error, KUSChatSession *session))completion;
- (void)submitFormMessages:(NSArray<NSDictionary *> *)messages
                    formId:(NSString *)formId
                completion:(void(^)(NSError *error, KUSChatSession *session, NSArray<KUSChatMessage *> *messages))completion;

// Sends custom attributes to the most active conversation, or the first conversation created
- (void)describeActiveConversation:(NSDictionary<NSString *, NSObject *> *)customAttributes;

// Returns the chat session with the most recent MessageAt
- (KUSChatSession *)mostRecentSession;

// Returns the latest date representing the last message received across all sessions
- (NSDate *)lastMessageAt;

// Returns the lastSeenAt for a given session, using the data model as well as augmented by a local store
- (NSDate *)lastSeenAtForSessionId:(NSString *)sessionId;

// Returns the total unread message count for all sessions excluding the specified sessionId
- (NSUInteger)totalUnreadCountExcludingSessionId:(NSString *)excludedSessionId;

@end
