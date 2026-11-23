//
#ifndef T1TagSetView_h
#define T1TagSetView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "_TtP14T1TwitterSwift20T1TagSetViewDelegate_-Protocol.h"

@class NSString, TFSTwitterTagSet, UIColor, UIFont, UIImage, UIView;

@interface T1TagSetView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *showsAccountUserFirstOverride;
    NSNumber"16@0:8 *attributedTextView;
    NSNumber"16@0:8 *iconView;
    NSNumber"16@0:8 *needsTextUpdate;
    NSNumber"16@0:8 *originalBackgroundColor;
    NSNumber"16@0:8 *touchDownRecognizer;
    NSNumber"16@0:8 *tapRecognizer;
    NSNumber"16@0:8 *longPressRecognizer;
}

@property (nonatomic, weak) id <T1TwitterSwift.T1TagSetViewDelegate> delegate;
@property (nonatomic, retain) TFSTwitterTagSet *tagSet;
@property (nonatomic) long long prioritizedUserID;
@property (nonatomic, copy) NSString *titleForEmptyTagSet;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIFont *boldFont;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) _Bool singleLine;
@property (nonatomic) _Bool summarize;
@property (nonatomic) _Bool showAccountUserFirst;
@property (nonatomic) _Bool selectionEnabled;
@property (nonatomic) _Bool highlightEnabled;

/* class methods */
+ (double)selectionPadding;
+ (struct CGSize { double x0; double x1; })sizeForTagSet:(id)set prioritizedUserID:(long long)id font:(id)font boldFont:(id)font icon:(id)icon singleLine:(_Bool)line summarize:(_Bool)summarize showAccountUserFirst:(_Bool)first selectionEnabled:(_Bool)enabled highlightEnabled:(_Bool)enabled inWidth:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didLongPressRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)handleTouchDown;
- (void)handleTap;
- (void)handleLongPress;

@end

#endif /* T1TagSetView_h */
