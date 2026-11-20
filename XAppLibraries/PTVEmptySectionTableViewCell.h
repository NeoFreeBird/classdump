//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVEmptySectionTableViewCell_h
#define PTVEmptySectionTableViewCell_h
@import Foundation;

#include "PTVTableViewCell.h"

@class UIView;

@interface PTVEmptySectionTableViewCell : PTVTableViewCell {
    /* instance variables */
    UIView *_emptyView;
}

/* class methods */
+ (double)PreferredHeight;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)setEmptyView:(id)view;

@end

#endif /* PTVEmptySectionTableViewCell_h */
