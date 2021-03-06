//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISplitViewControllerDelegate-Protocol.h"

@class StorageDebugDataSource, SyncDebugDataSource, UIViewController;

__attribute__((visibility("hidden")))
@interface SyncAndStorageDebugInspectorController : NSObject <UISplitViewControllerDelegate>
{
    UIViewController *_viewController;
    StorageDebugDataSource *_storageDataSource;
    SyncDebugDataSource *_syncDataSource;
}

@property(readonly, nonatomic) SyncDebugDataSource *syncDataSource; // @synthesize syncDataSource=_syncDataSource;
@property(readonly, nonatomic) StorageDebugDataSource *storageDataSource; // @synthesize storageDataSource=_storageDataSource;
- (void).cxx_destruct;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (void)didLoadSplitViewController:(id)arg1;
- (void)done;
- (void)presentFromView:(id)arg1 inViewController:(id)arg2;
- (id)init;

@end

