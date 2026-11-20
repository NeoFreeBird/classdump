//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TwitterSocialContext_Protocol_h
#define T1TwitterSocialContext_Protocol_h
@import Foundation;

@class NSArray, NSAttributedString, NSString, TFSURTUrl;

@protocol T1TwitterSocialContext

@required

@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *socialContextScribeElement;
@property (nonatomic, readonly) NSString *socialContextScribePage;
@property (nonatomic, readonly) NSAttributedString *bannerText;
@property (nonatomic, readonly) NSAttributedString *linkText;
@property (nonatomic, readonly) NSString *socialBadgeName;
@property (nonatomic, readonly) NSArray *allUserReferences;
@property (nonatomic, readonly) TFSURTUrl *landingURL;

@optional

@end

#endif /* T1TwitterSocialContext_Protocol_h */
