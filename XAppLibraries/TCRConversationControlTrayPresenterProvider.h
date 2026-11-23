//
#ifndef TCRConversationControlTrayPresenterProvider_h
#define TCRConversationControlTrayPresenterProvider_h
@import Foundation;

#include "TCRConversationControlTrayPresenterProviding-Protocol.h"

@class NSObject;

@interface TCRConversationControlTrayPresenterProvider : NSObject <TCRConversationControlTrayPresenterProviding> // (Swift)

/* instance methods */
- (id)trayPresenterWithInitialTypes:(id)types types:(id)types geoOptions:(id)options allowsMultipleSelection:(_Bool)selection disablesEmptySingleSelectRegionApply:(_Bool)apply delegate:(id)delegate onScribeSelection:(id /* block */)selection onScribeRegionToggle:(id /* block */)toggle;
- (id)init;

@end

#endif /* TCRConversationControlTrayPresenterProvider_h */
