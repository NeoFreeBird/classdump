//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
