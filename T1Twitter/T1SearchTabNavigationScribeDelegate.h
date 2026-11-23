//
#ifndef T1SearchTabNavigationScribeDelegate_h
#define T1SearchTabNavigationScribeDelegate_h
@import Foundation;

#include "T1URTGenericViewControllerCollectionDelegate-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSArray, NSObject;

@interface T1SearchTabNavigationScribeDelegate : NSObject <T1URTGenericViewControllerCollectionDelegate>

@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (copy, nonatomic) NSArray *tabScribeElements;

/* instance methods */
- (id)initWithScribe:(id)scribe tabScribeElements:(id)elements;
- (void)genericViewControllerCollectionWithDidSelectContentViewController:(id)controller at:(long long)at indexChanged:(_Bool)changed;

@end

#endif /* T1SearchTabNavigationScribeDelegate_h */
