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
