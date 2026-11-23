//
#ifndef OCFOnboardingAttributedTextTapTranslator_h
#define OCFOnboardingAttributedTextTapTranslator_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TFNAttributedTextView;
@protocol OCFNavigationLinkHandler;

@interface OCFOnboardingAttributedTextTapTranslator : TFNAttributedTextView <TFNAttributedTextViewDelegate>

@property (weak, nonatomic) id <OCFNavigationLinkHandler> navigationLinkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* OCFOnboardingAttributedTextTapTranslator_h */
