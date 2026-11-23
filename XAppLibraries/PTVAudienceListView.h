//
#ifndef PTVAudienceListView_h
#define PTVAudienceListView_h
@import Foundation;

#include "PTVAudienceListViewComponents.h"

@class NSArray, NSString, UILabel, UIView;

@interface PTVAudienceListView : UIView {
    /* instance variables */
    _Bool _shouldTruncate;
    PTVAudienceListViewComponents *_components;
    UILabel *_titleLabel;
    UILabel *_suffixLabel;
}

@property (retain, nonatomic) NSString *emptyText;
@property (readonly, nonatomic) NSArray *listMembers;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setupPTVAudienceListView;
- (void)setListMembers:(id)members shouldTruncate:(_Bool)truncate;
- (id)textAttributes;
- (void)recalculateLabelText;
- (struct CGSize { double x0; double x1; })sizeOfString:(id)string withSize:(struct CGSize { double x0; double x1; })size;
- (id)suffixWithCount:(unsigned long long)count;
- (id)calculateComponentsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

@end

#endif /* PTVAudienceListView_h */
