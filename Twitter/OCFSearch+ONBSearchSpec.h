//
#ifndef OCFSearch_ONBSearchSpec_h
#define OCFSearch_ONBSearchSpec_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"

@class NSObject, NSString, OCFExpandedButton, OCFExpandedRichText;

@interface OCFSearch (ONBSearchSpec)

/* instance methods */
- (id)searchSpecWithSubtaskDataProvider:(id)provider navigationLinkHandler:(id)handler;

@end

#endif /* OCFSearch_ONBSearchSpec_h */
