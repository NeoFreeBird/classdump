//
#ifndef T1PushActionHandlerFactory_h
#define T1PushActionHandlerFactory_h
@import Foundation;

@class NSObject;

@interface T1PushActionHandlerFactory : NSObject

/* class methods */
+ (id)makeHandlerForIdentifier:(id)identifier;

@end

#endif /* T1PushActionHandlerFactory_h */
