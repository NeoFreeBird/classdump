//
#ifndef TFNSettingsNavigationGroupedItem_h
#define TFNSettingsNavigationGroupedItem_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFNSettingsNavigationGroupedItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *navigationItems;

/* instance methods */
- (id)init;
- (id)initWithTitle:(id)title navigationItems:(id)items;

@end

#endif /* TFNSettingsNavigationGroupedItem_h */
