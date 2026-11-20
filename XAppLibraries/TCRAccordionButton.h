//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAccordionButton_h
#define TCRAccordionButton_h
@import Foundation;

@class TFNButton;

@interface TCRAccordionButton : TFNButton

@property (nonatomic) _Bool open;

/* instance methods */
- (id)init;
- (void)setOpen:(_Bool)open animated:(_Bool)animated;
- (void)_tcr_animateOpen:(_Bool)open completion:(id /* block */)completion;
- (_Bool)isOpen;

@end

#endif /* TCRAccordionButton_h */
