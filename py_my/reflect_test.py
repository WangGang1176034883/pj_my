#!/usr/bin/python
import configparser
class Settings:
    def __init__(self):
        ########
        #self.port=None
        #self.basedir=None
        #self.datadir=None
        #self.max_connect_errors=None
        #self.character_set_server=None
        #self.default_storage_engine=None
        #self.default_authentication_plugin=None
        #self.skip_ssl=None
        #self.default_time_zone=None
        #self.name=None
        ########                        
        self.port=int
        self.basedir=str
        self.datadir=str
        self.max_connect_errors=int
        self.character_set_server=str
        self.default_storage_engine=str
        self.default_authentication_plugin=str
        self.skip_ssl=str
        self.default_time_zone=str
        self.name=str
def run():
    obj = Settings()
    parser =configparser.ConfigParser(allow_no_value=True)
    parser.read("my.ini",encoding="utf-8")
    ########
    #for k,v in parser.items("mysqld"):
    #    setattr(obj,k,v)
    #print(obj.__dict__)
    ########
    for field,type in obj.__dict__.items():
        value=parser.get("mysqld",field)
        data = type(value)
        setattr(obj,field,data)
    print(obj.__dict__)
    print(obj.port,type(obj.port))
    print(obj.max_connect_errors,type(obj.max_connect_errors))
    print(type("hello"))
if __name__ == '__main__':
    run()
