//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VideoReactionAttributionView_h
#define T1VideoReactionAttributionView_h
@import Foundation;

@class UIView;

@interface T1VideoReactionAttributionView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *avatarDataSource;
    NSNumber"16@0:8 *badges;
    NSNumber"16@0:8 *iconImageView;
    NSNumber"16@0:8 *prefixLabel;
    NSNumber"16@0:8 *avatarView;
    NSNumber"16@0:8 *nameLabel;
    NSNumber"16@0:8 *badgeImageView;
}

@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)configureWithUserPerspective:(id)perspective account:(id)account;
- (void)reset;
- (void)handleTap;

@end

#endif /* T1VideoReactionAttributionView_h */
