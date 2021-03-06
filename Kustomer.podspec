Pod::Spec.new do |s|
  s.name = 'Kustomer'
  s.authors = 'Kustomer.com'
  s.summary = 'The iOS SDK for the Kustomer.com mobile client'
  s.version = '0.0.1'
  s.ios.deployment_target = '9.0'

  s.homepage = 'https://github.com/danielamitay/kustomer-ios-sdk'
  s.source = {
    :git => 'https://github.com/danielamitay/kustomer-ios-sdk.git',
    :tag => s.version.to_s
  }

  s.dependency 'libPusher', '~> 1.6.3'
  s.dependency 'TSMarkdownParser', '~> 2.1.3'
  s.dependency 'SDWebImage', '~> 4.0'
  s.dependency 'TTTAttributedLabel', '~> 2.0.0'
  s.dependency 'NYTPhotoViewer', '~> 1.2.0'

  s.resources = 'Source/**/*.{png,m4a}'
  s.source_files = 'Source/**/*.{h,m}'
  s.requires_arc = true
  s.framework = 'UIKit'
end
