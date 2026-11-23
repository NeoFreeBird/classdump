//
#ifndef PTVGiftingContributorsTableHeaderView_h
#define PTVGiftingContributorsTableHeaderView_h
@import Foundation;

@class UILabel, UITableViewHeaderFooterView;

@interface PTVGiftingContributorsTableHeaderView : UITableViewHeaderFooterView {
    /* instance variables */
    UILabel *_label;
}

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)setTitle:(id)title;

@end

#endif /* PTVGiftingContributorsTableHeaderView_h */
