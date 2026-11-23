//
#ifndef T1MainAppTabDataSource_h
#define T1MainAppTabDataSource_h
@import Foundation;

#include "T1TabbedAppNavigationDataSource-Protocol.h"

@class NSArray, NSObject;

@interface T1MainAppTabDataSource : NSObject <T1TabbedAppNavigationDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *cancellables;
    NSNumber"16@0:8 *tabContentByIdentifier;
    NSNumber"16@0:8 *interactionsTimelineBridge;
}

@property (nonatomic, copy) NSArray *tabContent;

/* instance methods */
- (id)initWithAccount:(id)account interactionsTimelineBridge:(id)bridge;
- (id)init;

@end

#endif /* T1MainAppTabDataSource_h */
