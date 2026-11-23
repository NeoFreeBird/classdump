//
#ifndef TASCommunitySpaceBadge_h
#define TASCommunitySpaceBadge_h
@import Foundation;

@class UIView;

@interface TASCommunitySpaceBadge : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 $__lazy_storage_$_iconImageView;
    @40@0:8:16@24@32 textLabel;
    @40@0:8:16@24@32 stackView;
}

/* instance methods */
- (id)initWithCommunityName:(id)name delegate:(id)delegate;
- (void)updateWith:(id)with;
- (void)onTap;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASCommunitySpaceBadge_h */
