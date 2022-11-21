#!/usr/bin/python
class Pagination:
    def __init__(self,page,page_count=10):
        self.page = int(page)
        self.page_count = page_count
    @property
    def start(self):
        return (self.page-1)*self.page_count 
    @property
    def end(self):
        return self.page*self.page_count
def run():
    data_list = []
    for i in range(1,51):
        data_list.append("move to {}".format(i))
    page = input("input page:")
    page = int(page)
    ########
    #page_count = 10
    #start= (page-1)*page_count
    #end= page*page_count
    ########
    pg = Pagination(page)
    page_list = data_list[pg.start:pg.end]
    for list in page_list:
        print(list)
if __name__ == '__main__':
    run()
