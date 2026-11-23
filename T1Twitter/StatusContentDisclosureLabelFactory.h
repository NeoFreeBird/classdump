//
#ifndef StatusContentDisclosureLabelFactory_h
#define StatusContentDisclosureLabelFactory_h
@import Foundation;

@class NSObject;

@interface StatusContentDisclosureLabelFactory : NSObject // (Swift)

/* class methods */
+ (id)aiGeneratedLabel;
+ (id)paidPromotionLabel;
+ (void)updateAIGeneratedLabel:(id)label usesGrokImagineText:(_Bool)text;
+ (struct CGSize { double x0; double x1; })intrinsicLabelSize:(id)size;

/* instance methods */
- (id)init;

@end

#endif /* StatusContentDisclosureLabelFactory_h */
