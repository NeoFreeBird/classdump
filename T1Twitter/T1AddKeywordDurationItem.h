//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AddKeywordDurationItem_h
#define T1AddKeywordDurationItem_h
@import Foundation;

@class TFNLegacyFormCustomItem;

@interface T1AddKeywordDurationItem : TFNLegacyFormCustomItem

@property (nonatomic) double originalDuration;
@property (nonatomic) double duration;

/* instance methods */
- (void)private_updateDetailText;

@end

#endif /* T1AddKeywordDurationItem_h */
