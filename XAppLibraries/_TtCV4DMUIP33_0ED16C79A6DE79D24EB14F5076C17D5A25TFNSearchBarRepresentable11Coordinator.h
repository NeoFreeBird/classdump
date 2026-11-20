//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCV4DMUIP33_0ED16C79A6DE79D24EB14F5076C17D5A25TFNSearchBarRepresentable11Coordinator_h
#define _TtCV4DMUIP33_0ED16C79A6DE79D24EB14F5076C17D5A25TFNSearchBarRepresentable11Coordinator_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"

@class NSObject;

@interface DMUI.(TFNSearchBarRepresentable in _0ED16C79A6DE79D24EB14F5076C17D5A).Coordinator : NSObject <UISearchBarDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 parent;
}

/* instance methods */
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarTextDidBeginEditing:(id)editing;
- (void)searchBarTextDidEndEditing:(id)editing;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (id)init;

@end

#endif /* _TtCV4DMUIP33_0ED16C79A6DE79D24EB14F5076C17D5A25TFNSearchBarRepresentable11Coordinator_h */
