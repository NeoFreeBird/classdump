//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift26InlineCalloutTableViewCell_h
#define _TtC10TFNUISwift26InlineCalloutTableViewCell_h
@import Foundation;

#include "TFNTableViewCell.h"

@class TFNUISwift.InlineCalloutView;

@interface TFNUISwift.InlineCalloutTableViewCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    TFNUISwift.InlineCalloutView inlineCalloutView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwift26InlineCalloutTableViewCell_h */
