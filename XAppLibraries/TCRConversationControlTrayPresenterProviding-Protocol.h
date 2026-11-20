//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRConversationControlTrayPresenterProviding_Protocol_h
#define TCRConversationControlTrayPresenterProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRConversationControlTrayPresenterProviding <NSObject>

@required

/* required instance methods */
- (id)trayPresenterWithInitialTypes:(id)types types:(id)types geoOptions:(id)options allowsMultipleSelection:(_Bool)selection disablesEmptySingleSelectRegionApply:(_Bool)apply delegate:(id)delegate onScribeSelection:(id /* block */)selection onScribeRegionToggle:(id /* block */)toggle;
- (id)trayPresenterWithInitialTypes:(id)types types:(id)types geoOptions:(id)options allowsMultipleSelection:(_Bool)selection disablesEmptySingleSelectRegionApply:(_Bool)apply delegate:(id)delegate onScribeSelection:(id /* block */)selection onScribeRegionToggle:(id /* block */)toggle;

@optional

@end

#endif /* TCRConversationControlTrayPresenterProviding_Protocol_h */
