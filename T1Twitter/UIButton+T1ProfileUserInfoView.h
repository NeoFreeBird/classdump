//
#ifndef UIButton_T1ProfileUserInfoView_h
#define UIButton_T1ProfileUserInfoView_h
@import Foundation;

#include "T1ProfileUserInfoViewConfiguration.h"
#include "T1ProfileUserInfoViewDelegate-Protocol.h"
#include "T1ProfileWorkExperienceSection.h"
#include "T1TranslateButton.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSDate, NSString, TFNAttributedTextView, TFNFlexibleLayoutView, TFSTwitterEntitySet, TFSTwitterEntityURL, TFSTwitterGrokTranslation, TFSTwitterPlace, TFSTwitterTranslatedProfileBioModel, TFSTwitterUserExtendedProfile, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, _TtC12TweetDetails23GrokTranslateButtonView;

@interface UIButton (T1ProfileUserInfoView)

/* instance methods */
- (id /* block */)_t1_contentInsetsCalculator;
- (id /* block */)_t1_sizeCalculatorAllowingWrapping;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_t1_edgeInsetsToVisibleText;
- (void)_t1_setBulletpointStyleWithImageNamed:(id)named iconSize:(struct CGSize { double x0; double x1; })size iconSpacing:(double)spacing;
- (struct CGSize { double x0; double x1; })_t1_sizeThatFitsAllowingWrapping:(struct CGSize { double x0; double x1; })wrapping;

@end

#endif /* UIButton_T1ProfileUserInfoView_h */
