//
#ifndef T1StandardStatusTranslateView_h
#define T1StandardStatusTranslateView_h
@import Foundation;

#include "T1TranslateButton.h"

@class UIView;

@interface T1StandardStatusTranslateView : UIView

@property (retain, nonatomic) T1TranslateButton *translateButton;

/* class methods */
+ (double)buttonHeightForWidth:(double)width languageName:(id)name showTranslation:(_Bool)translation translationProvider:(id)provider;

/* instance methods */
- (id)init;
- (void)layoutSubviews;

@end

#endif /* T1StandardStatusTranslateView_h */
