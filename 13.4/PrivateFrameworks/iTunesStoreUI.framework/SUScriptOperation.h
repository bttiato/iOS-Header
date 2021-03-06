//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class WebScriptObject;

@interface SUScriptOperation : ISOperation
{
    id _options;
    ISOperation *_wrappedOperation;
    WebScriptObject *_callbackFunction;
}

+ (void)registerPostOperationClass:(Class)arg1 forType:(id)arg2;
+ (Class)postOperationClassForType:(id)arg1;
- (void)_sendCompletionCallback;
- (id)_scriptOptions;
- (void)setScriptOptions:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)initWithPostType:(id)arg1 options:(id)arg2;
- (id)initWithOperation:(id)arg1 callback:(id)arg2;
- (id)initWithOperation:(id)arg1 options:(id)arg2;

@end

