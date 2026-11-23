//
#ifndef T1StateUnarchiverDelegate_h
#define T1StateUnarchiverDelegate_h
@import Foundation;

#include "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1StateUnarchiverDelegate : NSObject <NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultUnarchiverDelegate;

/* instance methods */
- (Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)name originalClasses:(id)classes;

@end

#endif /* T1StateUnarchiverDelegate_h */
