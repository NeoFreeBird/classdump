//
#ifndef ONBActionListItem_h
#define ONBActionListItem_h
@import Foundation;

@class NSObject, NSString, OCFNavigationLink, UIFont, UIImage;

@interface ONBActionListItem : NSObject

@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *detailText;
@property (readonly, nonatomic) UIFont *textFont;
@property (readonly, nonatomic) UIFont *detailTextFont;
@property (readonly, nonatomic) OCFNavigationLink *link;
@property (readonly, nonatomic) long long options;

/* instance methods */
- (id)initWithText:(id)text detailText:(id)text textFont:(id)font detailTextFont:(id)font icon:(id)icon link:(id)link options:(long long)options;

@end

#endif /* ONBActionListItem_h */
