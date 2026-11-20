//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokTranslateButtonViewFeatures_h
#define GrokTranslateButtonViewFeatures_h
@import Foundation;

@class NSObject;

@interface GrokTranslateButtonViewFeatures : NSObject // (Swift)

@property (nonatomic, copy) id /* block */ captionTextBlock;
@property (nonatomic, copy) id /* block */ autoCaptionTextBlock;
@property (nonatomic) _Bool updateTextOnCapture;
@property (nonatomic, copy) id /* block */ captionTextForCaptureBlock;

/* instance methods */
- (id)initWithCaptionTextBlock:(id /* block */)block autoCaptionTextBlock:(id /* block */)block updateTextOnCapture:(_Bool)capture captionTextForCaptureBlock:(id /* block */)block;
- (id)init;

@end

#endif /* GrokTranslateButtonViewFeatures_h */
