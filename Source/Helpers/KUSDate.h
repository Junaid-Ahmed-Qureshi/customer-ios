//
//  KUSDate.h
//  Kustomer
//
//  Created by Daniel Amitay on 8/20/17.
//  Copyright © 2017 Kustomer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KUSDate : NSObject

+ (NSString *)humanReadableTextFromDate:(NSDate *)date;
+ (NSString *)messageTimestampTextFromDate:(NSDate *)date;

+ (NSDate *)dateFromString:(NSString *)string;
+ (NSString *)stringFromDate:(NSDate *)date;

@end
