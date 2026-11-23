//
#ifndef T1ProfileContentMainEntry_h
#define T1ProfileContentMainEntry_h
@import Foundation;

#include "T1ProfileContentEntry.h"

@class NSString;

@interface T1ProfileContentMainEntry : T1ProfileContentEntry

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *menuTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) id /* block */ titleReturnBlock;
@property (copy, nonatomic) id /* block */ subtitleReturnBlock;

/* instance methods */

@end

#endif /* T1ProfileContentMainEntry_h */
