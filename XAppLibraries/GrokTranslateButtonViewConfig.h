//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokTranslateButtonViewConfig_h
#define GrokTranslateButtonViewConfig_h
@import Foundation;

@class NSObject;

@interface GrokTranslateButtonViewConfig : NSObject // (Swift)

@property (nonatomic, readonly) long long translationType;
@property (nonatomic, readonly) long long translationTarget;
@property (nonatomic, readonly) _Bool showInfoButtonForTranslatable;
@property (nonatomic, readonly) _Bool showInfoButtonForTranslated;
@property (nonatomic, readonly) _Bool expandsTouchArea;
@property (nonatomic, readonly) _Bool captionTogglesTranslation;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)initWithTranslationType:(long long)type translationTarget:(long long)target showInfoButtonForTranslatable:(_Bool)translatable showInfoButtonForTranslated:(_Bool)translated expandsTouchArea:(_Bool)area captionTogglesTranslation:(_Bool)translation;
- (id)init;

@end

#endif /* GrokTranslateButtonViewConfig_h */
