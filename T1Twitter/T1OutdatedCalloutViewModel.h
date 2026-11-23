//
#ifndef T1OutdatedCalloutViewModel_h
#define T1OutdatedCalloutViewModel_h
@import Foundation;

#include "T1OutdatedCalloutSeeLatestSourceRange.h"

@class NSObject, NSString, TFNAttributedTextModel, UIColor, UIFont;

@interface T1OutdatedCalloutViewModel : NSObject

@property (readonly, nonatomic) unsigned long long displayType;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSString *iconImageName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (readonly, nonatomic) TFNAttributedTextModel *calloutTextModel;
@property (readonly, nonatomic) T1OutdatedCalloutSeeLatestSourceRange *suffixRange;

/* instance methods */
- (id)initWithDisplayType:(unsigned long long)type;
- (id)textLinkColor;
- (id)calloutText;
- (id)calloutSuffix;
- (id)calloutAttributedString;

@end

#endif /* T1OutdatedCalloutViewModel_h */
