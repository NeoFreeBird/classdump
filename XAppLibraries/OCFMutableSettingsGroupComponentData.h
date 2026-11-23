//
#ifndef OCFMutableSettingsGroupComponentData_h
#define OCFMutableSettingsGroupComponentData_h
@import Foundation;

#include "OCFRichText.h"
#include "OCFSettingsGroupComponentData.h"

@class NSArray, NSMutableArray;

@interface OCFMutableSettingsGroupComponentData : OCFSettingsGroupComponentData {
    /* instance variables */
    NSMutableArray *_mutableSettings;
}

@property (retain, nonatomic) OCFRichText *primaryText;
@property (retain, nonatomic) OCFRichText *secondaryText;
@property (retain, nonatomic) NSMutableArray *settings;
@property (retain, nonatomic) NSArray *statusTextQuantityPairs;

/* instance methods */

@end

#endif /* OCFMutableSettingsGroupComponentData_h */
