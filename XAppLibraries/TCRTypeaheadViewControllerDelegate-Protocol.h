//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
