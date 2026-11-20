//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSTypeaheadUserInfo_h
#define TTSTypeaheadUserInfo_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TTSTypeaheadUserInfo : NSObject

@property (nonatomic) _Bool hasAccountLabel;
@property (copy, nonatomic) NSString *accountLabelText;
@property (copy, nonatomic) NSArray *badges;

/* instance methods */
- (id)initWithHasAccountLabel:(_Bool)label accountLabelText:(id)text badges:(id)badges;

@end

#endif /* TTSTypeaheadUserInfo_h */
