//
#ifndef TNLTemporaryFile_h
#define TNLTemporaryFile_h
@import Foundation;

#include "TNLTemporaryFile-Protocol.h"

@class NSObject, NSString;

@interface TNLTemporaryFile : NSObject <TNLTemporaryFile> {
    /* instance variables */
    _Bool _exists;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void * /* function */ x8; void * /* function */ x9; void * /* function */ x10; void * /* function */ x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } * _file;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) _Bool open;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)temporaryFileWithExistingFilePath:(id)path error:(out id *)error;

/* instance methods */
- (id)init;
- (void)dealloc;
- (_Bool)isOpen;
- (_Bool)close:(out id *)close;
- (_Bool)open:(out id *)open;
- (_Bool)appendData:(id)data error:(out id *)error;
- (_Bool)moveToPath:(id)path error:(out id *)error;

@end

#endif /* TNLTemporaryFile_h */
