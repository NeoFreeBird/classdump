//
#ifndef GADOMIDDictionaryUtil_h
#define GADOMIDDictionaryUtil_h
@import Foundation;

@class NSObject;

@interface GADOMIDDictionaryUtil : NSObject

/* class methods */
+ (id)stateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame clipsToBounds:(_Bool)bounds;
+ (void)state:(id)state addObstructionInfo:(id)info;
+ (void)state:(id)state addSessionId:(id)id;
+ (void)state:(id)state addChildState:(id)state;
+ (void)state:(id)state addNotVisibleReason:(unsigned long long)reason;
+ (void)state:(id)state addOutputDeviceStatus:(unsigned long long)status;
+ (_Bool)state:(id)state isEqualToState:(id)state;
+ (id)emptyState;
+ (id)stringFromJSON:(id)json;
+ (id)stringToJSON:(id)json;
+ (id)stringFromObstructionType:(unsigned long long)type;
+ (id)getStringHiddenReason:(unsigned long long)reason;
+ (unsigned char)isOutputDeviceNotAttached:(unsigned long long)attached;

@end

#endif /* GADOMIDDictionaryUtil_h */
