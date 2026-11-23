//
#ifndef TCRTypeaheadViewControllerDelegate_Protocol_h
#define TCRTypeaheadViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRTypeaheadViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)composeTypeaheadViewController:(id)controller didSelectItem:(id)item;
- (void)composeTypeaheadViewController:(id)controller scrollViewDidScroll:(id)scroll;

@optional

@end

#endif /* TCRTypeaheadViewControllerDelegate_Protocol_h */
