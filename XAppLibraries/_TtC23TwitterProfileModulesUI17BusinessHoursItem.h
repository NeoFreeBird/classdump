//
#ifndef _TtC23TwitterProfileModulesUI17BusinessHoursItem_h
#define _TtC23TwitterProfileModulesUI17BusinessHoursItem_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterProfileModules.BusinessHours.Weekday, TwitterProfileModules.ClockTime open_AA5closet, TwitterProfileModules.ProfileScribingCapability, TwitterProfileModulesUI.BusinessHoursItemDelegate ?;

@interface TwitterProfileModulesUI.BusinessHoursItem : NSObject { // (Swift)
    /* instance variables */
    TwitterProfileModules.BusinessHours.Weekday weekday;
    TwitterProfileModules.ClockTime open_AA5closet operatingHours;
    Swift.Bool showDeleteButton;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    TwitterProfileModulesUI.BusinessHoursItemDelegate ? delegate;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI17BusinessHoursItem_h */
