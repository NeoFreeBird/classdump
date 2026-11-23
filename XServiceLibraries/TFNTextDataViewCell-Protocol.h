//
#ifndef TFNTextDataViewCell_Protocol_h
#define TFNTextDataViewCell_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIImageView, UILabel;

@protocol TFNTextDataViewCell <NSObject>

@required

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) _Bool multipleTextLines;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (nonatomic) _Bool multipleDetailTextLines;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) double detailTextPadding;

/* class methods */
+ (id)detailFontForStyle:(long long)style;

@optional

@end

#endif /* TFNTextDataViewCell_Protocol_h */
