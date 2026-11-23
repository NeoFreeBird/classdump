//
#ifndef TFNTableViewHeaderFooterView_h
#define TFNTableViewHeaderFooterView_h
@import Foundation;

@class UITableViewHeaderFooterView;

@interface TFNTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic) _Bool isPinnedAtTopOfTable;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_t1_layoutContentView;
- (void)willDisplayInDataViewController:(id)controller forSection:(long long)section;

@end

#endif /* TFNTableViewHeaderFooterView_h */
