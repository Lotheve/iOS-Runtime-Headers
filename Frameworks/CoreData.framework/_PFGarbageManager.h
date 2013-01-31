/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject  {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableDictionary *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)defaultInstance;

- (unsigned int)retainCount;
- (id)retain;
- (void)release;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)doCleanupForURL:(id)arg1;
- (id)temporaryLinksDirectoryForStore:(id)arg1;
- (void)removeDirectory:(id)arg1;
- (BOOL)registerURLForCleanup:(id)arg1;
- (void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2;
- (void)_deleteIfNecessary:(id)arg1;
- (id)_init__;

@end