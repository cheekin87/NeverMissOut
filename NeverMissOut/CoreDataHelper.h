//
//  CoreDataHelper.h
//  NeverMissOut
//
//  Created by KEN on 7/15/14.
//  Copyright (c) 2014 chee kin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataHelper : NSObject

@property (nonatomic, readonly) NSManagedObjectContext          *context;
@property (nonatomic, readonly) NSManagedObjectModel            *model;
@property (nonatomic, readonly) NSPersistentStoreCoordinator    *coordinator;
@property (nonatomic, readonly) NSPersistentStore               *store;

-(void)setupCoreData;
-(void)saveContext;

@end
