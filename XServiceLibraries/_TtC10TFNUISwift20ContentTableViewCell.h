//
#ifndef _TtC10TFNUISwift20ContentTableViewCell_h
#define _TtC10TFNUISwift20ContentTableViewCell_h
@import Foundation;

#include "TFNDataViewCell-Protocol.h"
#include "TFNTableViewCell.h"

@interface TFNUISwift.ContentTableViewCell : TFNTableViewCell <TFNDataViewCell> // (Swift)

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwift20ContentTableViewCell_h */
