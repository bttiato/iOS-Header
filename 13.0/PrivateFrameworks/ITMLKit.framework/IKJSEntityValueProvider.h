//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSEntityValueProvider-Protocol.h>

@protocol IKEntityValueProviding;

@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider>
{
    id <IKEntityValueProviding> _entityValueProvider;
}

@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
- (void).cxx_destruct;
- (id)_valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;

@end

