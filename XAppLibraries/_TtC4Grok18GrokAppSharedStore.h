//
#ifndef _TtC4Grok18GrokAppSharedStore_h
#define _TtC4Grok18GrokAppSharedStore_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.GrokAccountRemovalLedger, _$sSSSg, _$sSo14NSUserDefaultsCSg, _TtCs12_SwiftObject;

@interface Grok.GrokAppSharedStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    __C.NSUserDefaults? sharedUserDefaults;
    Swift.String? keychainAccessGroup;
    Grok.GrokAccountRemovalLedger removalLedger;
}

@end

#endif /* _TtC4Grok18GrokAppSharedStore_h */
