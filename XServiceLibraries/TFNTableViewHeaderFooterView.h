//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
