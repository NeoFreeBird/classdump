//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok26GrokImagineEditImageParams_h
#define _TtC4Grok26GrokImagineEditImageParams_h
@import Foundation;

@class Grok.GrokImagineEditImageVerificationType, NSArray, NSNumber, NSObject, NSString, UIImage, _$sSS, _$sSSSg, _$sSaySo7UIImageCG, _$sSo7UIImageCSg, _$sSo8NSNumberCSg;

@interface Grok.GrokImagineEditImageParams : NSObject // (Swift)

@property (nonatomic, readonly) NSString *parentXPostID;
@property (nonatomic, readonly) NSString *parentXPostText;
@property (nonatomic, readonly) NSString *parentXPostAuthorProfileUsername;
@property (nonatomic, readonly) NSString *parentXPostAuthorProfileDisplayName;
@property (nonatomic, readonly) UIImage *parentXPostAuthorProfilePic;
@property (nonatomic, readonly) NSString *parentXPostAuthorProfileImageURL;
@property (nonatomic, readonly) long long parentXPostAuthorProfileVerificationType;
@property (nonatomic, readonly) NSArray *sourceImages;
@property (nonatomic, readonly) NSNumber *startIndex;

/* instance methods */
- (id)initWithParentXPostID:(id)id parentXPostText:(id)text parentXPostAuthorProfileUsername:(id)username parentXPostAuthorProfileDisplayName:(id)name parentXPostAuthorProfilePic:(id)pic parentXPostAuthorProfileImageURL:(id)url parentXPostAuthorProfileVerificationType:(long long)type sourceImages:(id)images startIndex:(id)index;
- (id)init;

@end

#endif /* _TtC4Grok26GrokImagineEditImageParams_h */
