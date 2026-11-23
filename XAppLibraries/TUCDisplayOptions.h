//
#ifndef TUCDisplayOptions_h
#define TUCDisplayOptions_h
@import Foundation;

@class NSObject;

@interface TUCDisplayOptions : NSObject // (Swift)

@property (nonatomic, readonly) _Bool disableBottomPadding;
@property (nonatomic, readonly) _Bool shouldHideBorder;
@property (nonatomic, readonly) _Bool shouldAutoAdvance;
@property (nonatomic, readonly) _Bool shouldRenderShadow;
@property (nonatomic, readonly) double edgeInset;
@property (nonatomic, readonly) double componentSpacing;
@property (nonatomic, readonly) _Bool shouldRoundOutermostComponentCorners;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)initWithDisableBottomPadding:(_Bool)padding shouldHideBorder:(_Bool)border shouldAutoAdvance:(_Bool)advance shouldRenderShadow:(_Bool)shadow edgeInset:(double)inset componentSpacing:(double)spacing shouldRoundOutermostComponentCorners:(_Bool)corners;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCDisplayOptions_h */
