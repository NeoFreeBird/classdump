//
#ifndef NOZAbstractZipEntry_h
#define NOZAbstractZipEntry_h
@import Foundation;

#include "NOZZipEntry-Protocol.h"

@class NSObject, NSString;

@interface NOZAbstractZipEntry : NSObject <NOZZipEntry>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) float compressionLevel;
@property (nonatomic) unsigned short compressionMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name;
- (id)initWithEntry:(id)entry;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* NOZAbstractZipEntry_h */
